file = main
ext = c

create_dir:
	@if not exist bin mkdir bin
	@if not exist obj mkdir obj

a:
	g++ -Wall src\$(file).$(ext) -o ..\..\bin\$(file).exe 
	..\..\bin\$(file).exe

init: create_dir a