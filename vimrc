  1 
  2 set nocompatible              " be iMproved, required
  3 filetype off                  " required
  4 "------------------------------------------------------------------
  5 "ARCHIVOS COMPLEMENTARIOS (PLUGINS)
  6 " set the runtime path to include Vundle and initialize
  7 set rtp+=~/.vim/bundle/Vundle.vim
  8 call vundle#begin()
  9 " alternatively, pass a path where Vundle should install plugins
 10 "call vundle#begin('~/some/path/here')
 11 
 12 " let Vundle manage Vundle, required
 13 Plugin 'VundleVim/Vundle.vim'
 14 
 15 " The following are examples of different formats supported.
 16 " Keep Plugin commands between vundle#begin/end.
 17 " plugin on GitHub repo
 18 
 19 " plugin from http://vim-scripts.org/vim/scripts.html
 20 " Plugin 'L9'
 21 packadd YouCompleteMe
 22 Plugin 'valloric/YouCompleteMe'
 23 " git repos on your local machine (i.e. when working on your own plugin)
 24 
 25 " The sparkup vim script is in a subdirectory of this repo called vim.
 26 " Pass the path to set the runtimepath properly.
 27 
 28 " Install L9 and avoid a Naming conflict if you've already installed a
 29 " different version somewhere else.
 30 " Plugin 'ascenator/L9', {'name': 'newL9'}
 31 
 32 " All of your Plugins must be added before the following line
 33 call vundle#end()            " required
 34 filetype plugin indent on    " required
 35 " To ignore plugin indent changes, instead use:
 36 "filetype plugin on
 37 "
 38 " Brief help
 39 " :PluginList       - lists configured plugins
 40 " :PluginInstall    - installs plugins; append `!` to update or just :PluginUpdate
 41 " :PluginSearch foo - searches for foo; append `!` to refresh local cache
 42 " :PluginClean      - confirms removal of unused plugins; append `!` to auto-approve removal
 43 "
 44 " see :h vundle for more details or wiki for FAQ
 45 " Put your non-Plugin stuff after this line
 46 "-------------------------------------------------------------------
 47 "CONFIGURACIÓN PERSONAL
 48 
 49 " Habilitar resaltado de sintaxis
 50 syntax enable
 51 
 52 " Colores personalizados
 53 colorscheme slate
 54 
 55 " Configuración de indentación para C
 56 autocmd FileType c setlocal expandtab tabstop=4 shiftwidth=4 softtabstop=4
 57 
 58 " Definir una función para compilar y ejecutar el programa en C
 59 function! CompileAndRunC()
 60 
 61     " Limpiar terminal
 62     silent !clear
 63 
 64     " Guardar el archivo actual
 65     w
 66 
 67     " Compilar con GCC y ejecutar
 68     execute "!gcc -lm -Wall -pedantic -std=c99 % -o %< && ./%<"
 69 endfunction
 70 
 71 " Mapear una combinación de teclas para llamar a la función CompileAndRunC
 72 noremap <F5> :call CompileAndRunC()<CR>
 73 
 74 
 75 " Configurar encabezado predeterminado para archivos C
 76 autocmd BufNewFile *.c 0r ~/template.c
 77 
 78 " Numeración de lineas
 79 set number
 80 
 81 " Sintaxis de Python
 82 autocmd FileType python syntax enable
 83 
 84 "Configuraciones extra del YouCompleteMe
 85 let g:ycm_python_binary_path = '/usr/bin/python3'  " Ruta al ejecutable de Python
 86 let g:ycm_collect_identifiers_from_comments_and_strings = 1  " Activa la recopilación de identificadores desde comentarios y cadenas
 87 
 88 set omnifunc=pythoncomplete#Complete
 89 
 90 autocmd FileType python setlocal omnifunc=pythoncomplete#Complete
 91 
 92 "Ejecutar Código de python
 93 function! CompileAndRunPython()
 94     " Limpiar terminal
 95     silent !clear
 96 
 97     " Guardar el archivo actual
 98     w
 99 
100     " Ejecutar el script Python
101     execute "!python3 %"
102 endfunction
103 
104 noremap <F6> :call CompileAndRunPython()<CR>
