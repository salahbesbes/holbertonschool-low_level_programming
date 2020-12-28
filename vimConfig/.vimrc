set nocompatible

source ~/.vim/vundle.vim
source ~/.vim/mapping.vim
source ~/.vim/coc.vim
source ~/.vim/kite.vim
"Functions

set shell=bash
" AutoCompl Pop Config
set complete+=kspell
set completeopt+=menu
set completeopt+=menuone   " Show the completions UI even with only 1 item
set completeopt-=longest   " Don't insert the longest common text
set completeopt+=preview   " Hide/show the documentation preview window
set completeopt+=noinsert  " Don't insert text automatically
set completeopt-=noselect  " Highlight the first completion automatically

let b:ale_linters = {
	\ 'python': ['flake8'],
	\ 'c': ['clang']
	\ }
let g:ale_fix_on_save = 1
let b:ale_fixers = {
	\ 'python': ['autopep8'],
	\ '*': ['remove_trailing_lines', 'trim_whitespace']
	\ }
"let g:ale_sign_column_always = 1
let g:ale_sign_error = '>>'
let g:ale_sign_warning = '--'
"highlight clear ALEErrorSign
"highlight clear ALEWarningSign
let g:ale_echo_msg_error_str = 'E'
let g:ale_echo_msg_warning_str = 'W'
let g:ale_echo_msg_format = '[%linter%] %s [%severity%]'

"let g:clang_library_path="/usr/lib/llvm-10/lib/clang/10.0.0/lib/"

"tab and indent configuration for .py files only
"autocmd FileType python :botright vertical pedit
"add commet to json file
autocmd FileType json syntax match Comment +\/\/.\+$+

set directory=~/.vim/dirs/tmp     " directory to place swap files in
set backup                        " make backup files
set backupdir=~/.vim/dirs/backups " where to put backup files
set undofile                      " persistent undos - undo after you re-open the file
set undodir=~/.vim/dirs/undos

" create needed directories if they don't exist
if !isdirectory(&backupdir)
	call mkdir(&backupdir, "p")
endif
if !isdirectory(&directory)
	call mkdir(&directory, "p")
endif
if !isdirectory(&undodir)
	call mkdir(&undodir, "p")
endif

" clear empty spaces at the end of lines on save of python files
autocmd BufWritePre *.py :%s/\s\+$//e

"Enable backspace in insert mode
set backspace=indent,eol,start
" C-c and C-v - Copy/Paste to global clipboard
vmap <C-c> "+yi
imap <C-v> <esc>"+gpi
set clipboard+=unnamed

" encoding dectection
set encoding=utf-8
" enable filetype dectection and ft specific plugin/indent
filetype plugin indent on

" enable syntax hightlight and completion
syntax on
syntax enable
" Vim UI
"--------
" color scheme
set background=dark
colorscheme gruvbox

" highlight current line
au WinLeave * set nocursorline
au WinEnter * set cursorline
set cursorline


set noequalalways   " all windows not same size after split or close
" search
set ignorecase "  case insensitive
set smartcase  "  use case if any caps used
set incsearch  "  show match as search proceeds
set hlsearch   "  search highlighting

" editor settings
set history=1000
set backspace=indent,eol,start             " More powerful backspacing
set t_Co=256                               " Explicitly tell vim that the terminal has 256 colors
set mouse=a				   " use mouse in all modes
set report=0                               " always report number of lines changed
set scrolloff=5                            " 5 lines above/below cursor when scrolling
set number                                 " show line numbers
set showmatch                              " show matching bracket (briefly jump)
set showcmd                                " show typed command in status bar
set showmode
set title                                  " show file in titlebar
set laststatus=2                           " use 2 lines for the status bar

set matchtime=2                            " show matching bracket for 0.2 seconds


"set directory=~/.vim/tmp                   " move swp file to /tmp
" Default Indentation
set textwidth=79
"set tw=80
set timeout
set timeoutlen=300		" response time
" format
set tabstop=4
set shiftwidth=4
set autoindent
set smartindent
set cindent
set smarttab
" some options
set fcs=vert:│ " solid vsplit separator
set virtualedit=onemore " virtual space at eol
set autoread " auto reload
set list " invisable chars
set listchars=tab:▸\ ,extends:❯,precedes:❮,nbsp:␣
set scrolloff=6 " minimal lines below cursor
let g:airline_theme = 'onedark'

" enable all Python syntax highlighting features
let python_highlight_all = 1
autocmd FileType c setlocal shiftwidth=8 softtabstop=8 expandtab
