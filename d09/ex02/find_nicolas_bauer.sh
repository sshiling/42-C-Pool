# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshiling <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/28 19:50:41 by sshiling          #+#    #+#              #
#    Updated: 2017/09/28 20:40:17 by sshiling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cat contacts_easy.txt | grep -i 'nicolas	' | grep -i 'bauer' | grep '-' | rev | tr -d '[:alpha:]' | rev | sed "s/	//g" | sed "s/@*//g" | cut -d . -f1
