filetype off                   " required!

set rtp+=~/.vim/bundle/Vundle.vim/
call vundle#rc()
"Coc
Plugin 'neoclide/coc.nvim', { 'branch': 'release' }
"Plugin 'davidhalter/jedi-vim'
"airline
Plugin 'vim-airline/vim-airline'
Plugin 'vim-airline/vim-airline-themes'


" snipets
"Plugin 'garbas/vim-snipmate'
Plugin 'honza/vim-snippets'
"Plugin 'SirVer/ultisnips'
"Plugin 'MarcWeber/vim-addon-mw-utils'
" linter and fixer
Plugin 'dense-analysis/ale'
" search for files + coc-fzf-preview
"Plugin 'junegunn/fzf', { 'do': { -> fzf#install() } }
" git usefull short-cut
Plugin 'tpope/vim-fugitive'
" autocomplete for shell
"Plugin 'Shougo/vimshell.vim'

call vundle#end()            " required

filetype plugin indent on     " required!
