# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    people.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tramet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 20:52:03 by tramet            #+#    #+#              #
#    Updated: 2018/08/30 00:00:15 by tramet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ldapsearch -xLLL '(uid=z*)' cn | grep cn: | sort -r --ignore-case | cut -c5-

