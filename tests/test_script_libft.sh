#todo: auto git clone repo
echo ">>>copying, compiling with flags, and deleting folder Libft"
cp -r ../Libft .
mv Libft Libft_copy
cd Libft_copy
gcc -c *.c -Wall -Wextra -Werror
cd ..
rm -r Libft_copy

echo ">>>fresh copy of Libft, checking norm and make [all, re, fclean, all, clean]"
cp -r ../Libft .
mv Libft Libft_copy
cd Libft_copy
norminette
#make all
#make re
#make fclean
make all
make clean
cd ..

echo ">>>compile and run main.c (and test_ft_*.c, ft_*.c) with provided libft.a, libft.h"
gcc -o compiled_test main.c test_ft*.c ft_*.c Libft_copy/libft.h Libft_copy/libft.a /lib/x86_64-linux-gnu/libc.so.6 -Wno-nonnull -lbsd
./compiled_test