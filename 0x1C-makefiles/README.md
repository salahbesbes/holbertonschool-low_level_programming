# MAKEFILE ✌

---

what is CFLAGS or RM
It's a Makefile variables. There're explicit variable (which is defined inside Makefile) or implicit variable (defined by make, can be override by you).

The list of implicit variables can be found by:

make -p
some of the most common variables can be found at: 10.3 Variables Used by Implicit Rules

You can expand variable by $(NAME) or ${NAME}
https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html
