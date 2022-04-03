file = asd1

a: create_dir
	cl /Wall /Fo..\..\obj\  /Fe..\..\bin\ src\$(file).c
	..\..\bin\$(file).exe

b:
	cl /Wall /Fo..\..\obj\  /Fe..\..\bin\ asd\driverTable.c asd\tabel.c
	..\..\bin\driverTable.exe

create_dir:
	@if not exist ..\..\bin mkdir ..\..\bin
	@if not exist ..\..\obj mkdir ..\..\obj

init: create_dir