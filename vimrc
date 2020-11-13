source ~/.vim/vundles.vim

" encoding dectection
"set fileencodings=utf-8,gb2312,gb18030,gbk,ucs-bom,cp936,latin1
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
set nocompatible
set nofoldenable                           " disable folding"
"set confirm                               " prompt when existing from an unsaved file
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
set directory=~/.vim/tmp                   " move swp file to /tmp
" Default Indentation
set textwidth=79
"set tw=80

set timeoutlen=300		" response time
" format
set tabstop=8 


set shiftwidth=8
set autoindent
set smartindent
set cindent
set smarttab      " insert tabs on the start of a line according to shiftwidth, not tabstop
" set statusline = %F%m%r%h%w\ [FOMAT=%{&ff}]\ [TYPE=%Y]\ [PS=%l,%v][%p%%]\ [BUFFER=%n]\ %{strftime('%c')}
set statusline^=%{coc#status()}%{get(b:,'coc_current_function','')}
" AutoCompl Pop Config 
set complete+=kspell
set completeopt=menuone,longest

" open terminal 
nnoremap <F9> :wa<CR>:vertical botright term ++kill=term<CR>
" close terminal
tnoremap <F12> <C-w>:q!<CR>

" navigate suggestions
inoremap <expr> <Left> pumvisible() ? "<C-e>" : "<left>" 
inoremap <expr> <Esc> pumvisible() ? "<C-e>" : "<Esc>"
inoremap <expr> <Tab> pumvisible() ? "<C-y>" : "<Tab>"

" some options
set fcs=vert:│ " solid vsplit separator
set virtualedit=onemore " virtual space at eol
set autoread " auto reload
set list " invisable chars
set listchars=tab:▸\ ,extends:❯,precedes:❮,nbsp:␣
set scrolloff=6 " minimal lines below cursor
set shell=bash





" Saving On Insert Mode
inoremap :w <Esc>:w<CR> 
inoremap :wq <Esc>:wq<CR>
inoremap ii <Esc>
let mapleader = '\<Space>'

" moving lines up and down
nnoremap <A-Down> :m .+1<CR>==
nnoremap <A-Up> :m .-2<CR>==
inoremap <A-Down> <esc>:m .+1<CR>==gi
inoremap <A-Up> <esc>:m .-2<CR>==gi
vnoremap <A-Down> :m '>+1<CR>gv==gv
vnoremap <A-Up> :m '<-2<CR>gv==gv

" Coc Config

function! s:show_docmentation()
      if (index(['vim','help'], &filetype) >= 0)
               execute 'h '.expand('<cword>')
       else 
               call CocAction('doHover')                
        endif
endfunction

" use <tab> for trigger completion and navigate to the next complete item
function! s:check_back_space() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~ '\s'
endfunction

inoremap <silent><expr> <Tab>
      \ pumvisible() ? "\<C-n>" :
      \ <SID>check_back_space() ? "\<Tab>" :
      \ coc#refresh()


" Use <C-l> for jump 
"let g:coc_snippet_next = '<c-l>'
"let g:coc_snippet_prev = '<c-j>'
inoremap <silent><expr> <TAB>
      \ pumvisible() ? coc#_select_confirm() :
      \ coc#expandableOrJumpable() ? "\<C-r>=coc#rpc#request('doKeymap', ['snippets-expand-jump',''])\<CR>" :
      \ <SID>check_back_space() ? "\<TAB>" :
      \ coc#refresh()

function! s:check_back_space() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction

let g:coc_snippet_next = '<tab>'



" GoTo code navigation.
nmap <silent> gd <Plug>(coc-definition)
nmap <silent> gy <Plug>(coc-type-definition)
nmap <silent> gi <Plug>(coc-implementation)
nmap <silent> gr <Plug>(coc-references)

" Explorer
nmap <space>e :CocCommand explorer<CR>
nmap <space>f :CocCommand explorer --preset floating<CR>
autocmd BufEnter * if (winnr("$") == 1 && &filetype == 'coc-explorer') | q | endif

let g:coc_explorer_global_presets = {
\   'floating': {
\      'position': 'floating',
\   },
\   'floatingLeftside': {
\      'position': 'floating',
\      'floating-position': 'left-center',
\      'floating-width': 30,
\   },
\   'floatingRightside': {
\      'position': 'floating',
\      'floating-position': 'right-center',
\      'floating-width': 30,
\   },
\   'simplify': {
\     'file.child.template': '[selection | clip | 1] [indent][icon | 1] [filename omitCenter 1]'
\   }
\ }
"function! s:explore()
"  sleep 350m
"  call execute('CocCommand explorer')
"endfunction

" Sure scripts are called after CocNvimInit
autocmd User CocNvimInit call s:initCoc()

autocmd BufEnter * if (winnr("$") == 1 && &filetype == 'coc-explorer') | q | endif

" Automatically open coc-explorer
"autocmd BufEnter * silent! let dir = getcwd()
"autocmd VimEnter * if argc() == 1 | exe 'CocCommand explorer --no-focus ' . dir | endif
"autocmd VimEnter * if argc() == 0 | Startify | exe 'CocCommand explorer --no-focus ' . dir | endif

"autocmd BufEnter * call CocActionAsync('runCommand', 'explorer.doAction', 'closest', {'name': 'cd', 'args': [dir]})

"let g:coc_global_extentions = [
 ""       \ 'coc-pairs',
 ""       \ 'coc-tsserver',
 ""       \ 'coc-eslint',
 ""       \ 'coc-prettier',
 ""       \ 'coc-json',
 ""       \ ]
 


 
" Vim LPS
if executable('pyls')
    " pip install python-language-server
    au User lsp_setup call lsp#register_server({
        \ 'name': 'pyls',
        \ 'cmd': {server_info->['pyls']},
        \ 'allowlist': ['python'],
        \ })
endif

function! s:on_lsp_buffer_enabled() abort
    setlocal omnifunc=lsp#complete
    setlocal signcolumn=yes
    if exists('+tagfunc') | setlocal tagfunc=lsp#tagfunc | endif
    nmap <buffer> gd <plug>(lsp-definition)
    nmap <buffer> gr <plug>(lsp-references)
    nmap <buffer> gi <plug>(lsp-implementation)
    nmap <buffer> gt <plug>(lsp-type-definition)
    nmap <buffer> <leader>rn <plug>(lsp-rename)
    nmap <buffer> [g <Plug>(lsp-previous-diagnostic)
    nmap <buffer> ]g <Plug>(lsp-next-diagnostic)
    nmap <buffer> K <plug>(lsp-hover)
    
    " refer to doc to add more commands
endfunction

augroup lsp_install
    au!
    " call s:on_lsp_buffer_enabled only for languages that has the server registered.
    autocmd User lsp_buffer_enabled call s:on_lsp_buffer_enabled()
augroup END




autocmd FileType python setlocal tabstop=4 shiftwidth=4 softtabstop=4 textwidth=120


" Rainbow parentheses for Lisp and variants
let g:rbpt_max = 16
autocmd Syntax lisp,scheme,clojure,racket RainbowParenthesesToggle

" tabbar
"let g:Tb_MaxSize = 2
"let g:Tb_TabWrap = 1

hi Tb_Normal guifg=white ctermfg=white
hi Tb_Changed guifg=green ctermfg=green
hi Tb_VisibleNormal ctermbg=252 ctermfg=235
hi Tb_VisibleChanged guifg=green ctermbg=252 ctermfg=white

" easy-motion
let g:EasyMotion_leader_key = '<Leader>'

" Tagbar
let g:tagbar_left=1
let g:tagbar_width=30
let g:tagbar_autofocus = 1
let g:tagbar_sort = 0
let g:tagbar_compact = 1
" tag for markdown
let g:tagbar_type_markdown = {
	\ 'ctagstype' : 'markdown',
	\ 'kinds' : [
		\ 'h:Heading_L1',
		\ 'i:Heading_L2',
		\ 'k:Heading_L3'
	\ ]
\ }


" Nerd Tree
let NERDChristmasTree=0
let NERDTreeWinSize=30
let NERDTreeChDirMode=2
let NERDTreeIgnore=['\~$', '\.pyc$', '\.swp$']
" let NERDTreeSortOrder=['^__\.py$', '\/$', '*', '\.swp$',  '\~$']
let NERDTreeShowBookmarks=1
let NERDTreeWinPos = "right"
let g:Powerline_symbols = 'fancy'




" i dont use the snippets manager Ultisps but im using snipMate
"
" Trigger configuration. You need to change this to something else than <tab> if you use https://github.com/Valloric/YouCompleteMe.
"let g:UltiSnipsExpandTrigger="<tab>"
"let g:UltiSnipsJumpForwardTrigger="<c-b>"
"let g:UltiSnipsJumpBackwardTrigger="<c-z>"

" If you want :UltiSnipsEdit to split your window.
"let g:UltiSnipsEditSplit="vertical"

" SuperTab
" let g:SuperTabDefultCompletionType='context'
"let g:SuperTabDefaultCompletionType = '<C-X><C-U>'
"let g:SuperTabRetainCompletionType=2

" ctrlp
set wildignore+=*/tmp/*,*.so,*.o,*.a,*.obj,*.swp,*.zip,*.pyc,*.pyo,*.class,.DS_Store  " MacOSX/Linux
let g:ctrlp_custom_ignore = '\.git$\|\.hg$\|\.svn$'

" Keybindings for plugin toggle
nnoremap <F2> :set invpaste paste?<CR>
set pastetoggle=<F2>
nmap <F5> :TagbarToggle<cr>
nmap <F6> :NERDTreeToggle<cr>
nmap <F3> :GundoToggle<cr>
nmap <F4> :IndentGuidesToggle<cr>
nmap  <D-/> :
nnoremap <leader>a :Ack
nnoremap <leader>v V`]

" Useful Functions
"------------------
" easier navigation between split windows
nnoremap <c-Down> <c-w>j
nnoremap <c-Up> <c-w>k
nnoremap <c-Left> <c-w>h
nnoremap <c-Right> <c-w>l
"map <c-w> <c-w><c-w>
" When editing a file, always jump to the last cursor position
autocmd BufReadPost *
      \ if ! exists("g:leave_my_cursor_position_alone") |
      \     if line("'\"") > 0 && line ("'\"") <= line("$") |
      \         exe "normal g'\"" |
      \     endif |
      \ endif

" w!! to sudo & write a file
cmap w!! %!sudo tee >/dev/null %

" Quickly edit/reload the vimrc file
nmap <silent> <leader>ev :e $MYVIMRC<CR>
nmap <silent> <leader>sv :so $MYVIMRC<CR>

" enable tabline
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#tabline#left_sep = ''
let g:airline#extensions#tabline#left_alt_sep = ''
let g:airline#extensions#tabline#right_sep = ''
let g:airline#extensions#tabline#right_alt_sep = ''

" enable powerline fonts
let g:airline_powerline_fonts = 1
let g:airline_left_sep = ''
let g:airline_right_sep = ''

" Switch to your current theme
let g:airline_theme = 'onedark'

" Always show tabs
set showtabline=2

" We don't need to see things like -- INSERT -- anymore
set noshowmode
