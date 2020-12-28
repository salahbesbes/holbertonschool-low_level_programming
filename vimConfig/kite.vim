

autocmd FileType python setlocal shiftwidth=4 softtabstop=4 expandtab

let g:kite_supported_languages = ['']
let g:kite_auto_complete=1
let g:kite_tab_complete=1
let g:kite_completions=1
let g:kite_snippets=1
let g:python_host_prog='/usr/local/bin/python3'



" close the prev window after completion is ended
"autocmd CompleteDone * if !pumvisible() | pclose | endif
"autocmd FileType python :botright vertical pedit
:botright vertical pedit
:vertical resize 120
nnoremap <silent> ll :exe "vertical resize " . (winwidth(0) * 6/5)<CR>
nnoremap <silent> kk :exe "vertical resize " . (winwidth(0) * 5/6)<CR>
" show suggestion
inoremap  mm  <C-x><C-u>
