/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amramcil <ramcilovicamin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:27:16 by amramcil          #+#    #+#             */
/*   Updated: 2025/02/09 15:13:08 by amramcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_condition(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('/');
	else if ((i == 0 && j == x -1) || (i == y - 1 && j == 0))
		ft_putchar('\\');
	else if (i == y - 1 && j == x - 1)
		ft_putchar('/');
	else if ((i == 0 || i == y - 1) || (j == 0 || j == x - 1))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_condition(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
