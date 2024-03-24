#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
 void print_message_function( void *ptr )
  {
	int a;
     char *message;
     message = (char *) ptr;
     printf("%s\n ", message);
	while(1)
	{
		printf("1 exit\n");
	}
  }
void print_message_functions( void *ptr )
 {
    char *message;
    message = (char *) ptr;
    printf("%s ", message);
	while(1)
	{
		printf("2 exit\n");
	}
 }

int  main()
  {
     pthread_t thread1, thread2;
     char *message1 = "Hello";
     char *message2 = "World";
     pthread_create( &thread1,NULL,(void*)&print_message_function, (void*) message1);
     pthread_create(&thread2,NULL, (void*)&print_message_functions, (void*) message2);
	pthread_join(thread1,NULL);
	printf("1 Done\n");
	pthread_join(thread2,NULL);
	printf("2 Done\n");
 } 
