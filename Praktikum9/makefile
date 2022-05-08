file = asd

a: create_dir
	gcc -Wall -o ..\bin\$(file).exe .\src\$(file).c
	..\bin\$(file).exe

create_dir:
	@if not exist ..\bin mkdir ..\bin
	@if not exist ..\obj mkdir ..\obj

init: create_dir