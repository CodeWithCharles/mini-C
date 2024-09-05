/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limb.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:53:33 by cpoulain          #+#    #+#             */
/*   Updated: 2024/09/05 23:55:59 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIMB_H
# define LIMB_H

# include "vector3.h"

typedef struct s_limb
{
	struct vector3	*vectors;
	char			*name;
}	t_limb;

#endif
