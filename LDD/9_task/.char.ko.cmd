cmd_/home/km/Programs/LDD/9_task/char.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -z noexecstack   --build-id  -T ./scripts/module-common.lds -o /home/km/Programs/LDD/9_task/char.ko /home/km/Programs/LDD/9_task/char.o /home/km/Programs/LDD/9_task/char.mod.o;  true
