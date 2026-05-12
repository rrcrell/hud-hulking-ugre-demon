#ifndef BIOME_H
#define BIOME_H

void evolve_biome_tile(int x, int y, MutationVector mut);
MutationVector generate_mutation_from_death(int enemy_type);

#endif