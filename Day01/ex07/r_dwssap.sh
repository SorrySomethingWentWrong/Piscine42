# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tramet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/29 18:35:40 by tramet            #+#    #+#              #
#    Updated: 2018/09/03 09:26:19 by tramet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat /etc/passwd | grep -v '^#' | cut -d: -f1 | sed "1d;n;d" | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed "s/$/,/g" | tr -d "\n" | sed "s/,/, /g" | sed "s/, $/./g" | tr -d "\n"
