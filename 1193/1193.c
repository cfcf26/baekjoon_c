/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1193.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekwak <ekwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:11:03 by ekwak             #+#    #+#             */
/*   Updated: 2022/05/12 23:51:47 by ekwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int find_line(int i)
{
	int n = 1;

	while(1)
	{
		if (i <= 0)
			return (0);
		if (n * (n - 1) / 2 < i && i <= n * (n + 1) / 2)
			return (n);
		n++;
	}
	return (0);
}

int main(void)
{
	int i;
	int n;
	int o;

	scanf("%d", &i);
	if (i == 1)
	{
		printf("1/1");
		return (0);
	}
	n = find_line(i);
	o = (n * (n + 1) / 2) - i;
	if (n % 2 != 0)
	{
		printf("%d/%d", o + 1, n - o);
	}
	else
	{
		printf("%d/%d", n - o, o + 1);
	}
}
