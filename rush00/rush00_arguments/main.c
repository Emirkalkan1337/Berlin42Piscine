/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:27:09 by emkalkan          #+#    #+#             */
/*   Updated: 2023/03/19 17:09:59 by feberman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_error_arg_count(void);
void	ft_error_not_num(void);
void	ft_error_overflow(void);
int		ft_validate_input(char *input);
int		ft_strtoint(char *str, int length);
int		ft_check_overflow(char *nbr, int length);
int		ft_check_num(char *str);

int	main(int arg_count, char **arg)
{
	int	x;
	int	y;

	if (arg_count == 3)
	{
		x = ft_validate_input(arg[1]);
		if (x == 0)
			return (1);
		y = ft_validate_input(arg[2]);
		if (y == 0)
			return (1);
		rush(x, y);
		return (0);
	}	
	ft_error_arg_count();
	return (1);
}

//convverts input string to int and checks possible errors
int	ft_validate_input(char *input)
{
	int		length;

	if (*input == '\0')
	{
		ft_error_not_num();
		return (0);
	}
	if (*input == '+')
		input++;
	while (*input == '0')
		input++;
	length = ft_check_num(input);
	if (length == 0)
		return (0);
	if (ft_check_overflow(input, length) == 1)
	{	
		ft_error_overflow();
		return (0);
	}
	else
		return (ft_strtoint(input, length));
}

/*returns 0 if input string is empty or has nonnumerical values 
otherwise returns legth of input string*/
int	ft_check_num(char *str)
{
	char	*travel;
	int		length;

	travel = str;
	length = 0;
	while (*travel != '\0')
	{
		length++;
		if (*travel < '0' || *travel > '9')
		{
			ft_error_not_num();
			return (0);
		}
		travel++;
	}
	if (length == 0)
	{
		ft_error_not_num();
		return (0);
	}
	return (length);
}

//checks for a potetial overflow before converting to int (returns 1 if so)
int	ft_check_overflow(char *nbr, int length)
{
	int		index;
	char	*max;

	max = "2147483647";
	if (length > 10)
		return (1);
	else if (length < 10)
		return (0);
	else
	{
		index = 0;
		while (index < 10)
		{
			if (nbr[index] > max[index])
				return (1);
			else if (nbr[index] < max[index])
				break ;
			index++;
		}
		return (0);
	}
}

//converts input string to integer
int	ft_strtoint(char *str, int length)
{
	int	nbr;
	int	mul;

	nbr = 0;
	mul = 1;
	while (length > 1)
	{
		mul *= 10;
		length--;
	}
	while (*str != '\0')
	{
		nbr += mul * (*str - 48);
		mul /= 10;
		str++;
	}
	return (nbr);
}
