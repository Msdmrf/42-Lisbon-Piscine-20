# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migusant <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 12:13:34 by migusant          #+#    #+#              #
#    Updated: 2025/03/19 14:05:29 by migusant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

find . -type f -name "*.c" -exec cc -Wall -Wextra -Werror -c {} \;
ar rc libft.a *.o
ranlib libft.a
rm *.o
