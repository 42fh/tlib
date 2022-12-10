echo ">>>fresh copy of Libft, checking norm and make [bonus, clean]"
rm -r Libft_copy_bonus
cp -r ../Libft .
mv Libft Libft_copy_bonus
cd Libft_copy_bonus
norminette
make bonus
make clean
cd ..

echo ">>>compile and run main_bonus.c (and test_ft_*_bonus.c, ft_*.c) with provided libft.a, libft.h"
gcc -o compiled_test_bonus main_bonus.c test_bonus.c ft_*.c Libft_copy_bonus/libft.h Libft_copy_bonus/libft.a
./compiled_test_bonus