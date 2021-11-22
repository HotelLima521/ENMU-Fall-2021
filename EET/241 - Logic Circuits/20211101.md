# Karnaugh Map Simplificiation of SOP Expressions:

After an SOP expression has been mapped, a minimum SOP expression is obtained by grouping the 1's and determining the minimum SOP expression from the map.

You can group 1s on the Karnaugh map according to the followin rules by enclosing those adjacent cells containing 1s. The goal is to maximize the size of the groups and to minimize the number of groups.
- A group must contain either 1, 2, 4, 8, or 16 cells, which are all powers of two. In the case of a 3 variable map, 2^3 = 8 cells is the maximum group.
- Each cell in a group must be adjacent to one or more cells in that same group, but all cells in the group do not have to be adjacent to each other.
- Always include the largest possible number of 1s in a group in accordance with rule 1.
- Each 1 on the map must be included in at least one group. The 1s already in a group can be included in another group if the overlapping groups include noncommon 1s.

## Determining the Minimum SOP Expression from the Map:

1. Group the cells that have 1s. Each group of cells containing 1s creates one product term composed of all variables that occur in only one form (either uncomplemented or complemented) within the group. Variables that occur both uncomplemented and complemented within the group are eliminated. These are called called contradictory variables.

2. Determine the minimum product term for each group.
a) For a 3-variable group:
- A 1-cell group yields a 3-variable product term
- A 2-cell group yields a 2-variable product term
- A 4-cell group yields a 1-variable product term
- A 8-cell group yields a value of 1 for the expression
b) For a 4-variable map:
- A 1-cell group yields a 4-variable product term
- A 2-cell group yields a 3-variable product term
- A 3-cell group yields a 2-variable product term
- A 4-cell group yields a 1-variable product term
