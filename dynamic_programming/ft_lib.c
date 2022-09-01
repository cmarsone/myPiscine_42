/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarsone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:46:13 by cmarsone          #+#    #+#             */
/*   Updated: 2022/08/31 15:48:20 by cmarsone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lib(int n)
{
	if (n <= 1)
		return (0);
	return (lib(n - 2));
}