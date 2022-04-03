file = genapganjilbukan

a: create_dir
	cl /Wall /Fo..\obj\  /Fe..\bin\ $(file).c
	..\bin\$(file).exe

create_dir:
	@if not exist ..\bin mkdir ..\bin
	@if not exist ..\obj mkdir ..\obj

init: create_dir