/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys_test_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narchiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:52:19 by narchiba          #+#    #+#             */
/*   Updated: 2018/11/22 13:54:01 by narchiba         ###   ########.fr       */
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
	
	fd = creat(argv[argc -1], 0666);
	dup2(fd, 1);
	/*add here your test>*/
	char	s1[100] = "abce";
	char	s2[100] = "abcd";
	printf("%d", memcmp(s1, s2, 4));
	/*<add here your test*/
	return (0);
}
