/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_sudoku.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegoube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:08:32 by clegoube          #+#    #+#             */
/*   Updated: 2016/08/13 19:08:34 by clegoube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_SUDOKU_H
# define LIB_SUDOKU_H
# include <stdlib.h>
# include <unistd.h>

extern int		ft_putchar(char c);
extern void		ft_display_errors(void);
extern void		ft_initialize_grid(char **argv, int **grid);
extern int		ft_is_valid_grid(int **grid, int line, int col);
extern int		ft_check_one_solution(int **grid);
extern int		ft_find_solution(int **grid, int position);
extern int		ft_check_grid(int **grid);
extern void		ft_display_grid(int **grid);
extern int		ft_not_in_block(int value, int **grid, int line, int col);
extern int		ft_not_in_col(int value, int **grid, int col);
extern int		ft_not_in_line(int value, int **grid, int line);
extern void		ft_free_space(int **grid);

#endif
