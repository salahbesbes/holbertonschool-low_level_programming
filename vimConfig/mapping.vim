
set nocompatible
" navigate suggestions
" Saving On Insert Mode
inoremap :w <Esc>:w<CR> 
inoremap :wq <Esc>:wq<CR>
inoremap ii <Esc>
"let mapleader = '\<Space>'


" moving lines up and down
nnoremap <A-Down> :m .+1<CR>==
nnoremap <A-Up> :m .-2<CR>==
inoremap <A-Down> <esc>:m .+1<CR>==gi
inoremap <A-Up> <esc>:m .-2<CR>==gi
xnoremap <A-Down> :m '>+1<CR>gv-gv
xnoremap <A-Up> :m '<-2<CR>gv-gv

" easier navigation between split windows
nnoremap <c-Down> <c-w>j
nnoremap <c-Up> <c-w>k
nnoremap <c-Left> <c-w>h

nnoremap <c-Right> <c-w>l

" When editing a file, always jump to the last cursor position
autocmd BufReadPost *
      \ if ! exists("g:leave_my_cursor_position_alone") |
      \     if line("'\"") > 0 && line ("'\"") <= line("$") |
      \         exe "normal g'\"" |
      \     endif |
      \ endif

" Quickly edit/reload the vimrc file
nmap <silent> <leader>ev :e $MYVIMRC<CR>
nmap <silent> <leader>sv :so $MYVIMRC<CR>







 
"
"inoremap <expr> <left>      pumvisible() ? "\<C-e>" : "\<left>"
"inoremap <expr> <Esc>       pumvisible() ? "\<C-e>" : "\<Esc>"
"inoremap <expr> <Tab>     pumvisible() ? "\<C-y>" : "\<Tab>"

" Fix to let ESC work as espected with Autoclose plugin
" (without this, when showing an autocompletion window, ESC won't leave insert
"  mode)
"let g:AutoClosePumvisible = {"ENTER": "\<C-Y>", "ESC": "\<ESC>"}
