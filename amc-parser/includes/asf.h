/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 03:35:15 by cpoulain          #+#    #+#             */
/*   Updated: 2024/09/06 04:05:40 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASF_H
# define ASF_H

# include "vector3.h"
# include "vector2.h"

typedef struct s_hierarchy
{
	char				*parent;
	char				**childs;
	struct s_hierarchy	*next_parent;
}	t_hierarchy;

typedef struct s_units
{
	float	mass;
	float	length;
	char	*angle;
}	t_units;

typedef struct s_asf_root
{
	char				*axis;
	char				**order;
	struct s_vector3	position;
	struct s_vector3	orientation;
}	t_asf_root;

typedef struct s_axis
{
	struct s_vector3	vector;
	char				*descriptor;
}	t_axis;

typedef struct s_dof_limits
{
	char				*motion_channel;
	struct s_vector2	dof;
}	t_dof_limits;

typedef struct s_bonedata
{
	int					id;
	char				*name;
	struct s_vector3	direction;
	float				length;
	struct s_axis		axis;
	struct s_dof_limits	*dofs_limits;
	struct s_bonedata	*next_bonedata;
}	t_bonedata;

typedef struct s_asf
{
	char				*version;
	char				*name;
	struct s_units		units;
	char				*documentation;
	struct s_asf_root	root;
	struct s_bonedata	*first_bonedata;
	struct s_hierarchy	*first_parent;
}	t_asf;

#endif
