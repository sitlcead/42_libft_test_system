/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys_test_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narchiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:52:19 by narchiba          #+#    #+#             */
/*   Updated: 2018/11/22 17:16:15 by narchiba         ###   ########.fr       */
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
	char	*s = "f1234f123f12f1234f134f";
	printf("%s", strrchr(s, 'f'));
	/*<add here your test*/
	return (0);
}
