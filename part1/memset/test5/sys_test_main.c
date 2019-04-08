/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys_test_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narchiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:53:23 by narchiba          #+#    #+#             */
/*   Updated: 2018/11/22 11:37:39 by narchiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*add here your includes>*/
#include "libft.h"
/*<add here your includes*/

int		main(int argc, char **argv)
{
	int		fd;
	
	fd = creat(argv[argc - 1], 0777);
	dup2(fd, 1);
	/*add here your test>*/
	char	s[100] = "111111111111111111111111111111111111";
	int		len = strlen(s);
	memset(s, '\0', 10);
	int		i;

	i = 0;
	while (i < len)
		printf("%c", s[i++]);
	close(fd);
	/*<add here your test*/
	return (0);
}
