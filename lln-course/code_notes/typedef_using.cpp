/*
 * Typedefs create an alias for an existing type
 * Used for readability
 * Common in old codebases (maybe not use this)
 *
 */

typedef unsigned long Score; // Score type is now used instead of 'typedef unsigned long'

// These are now 'typedef unsigned long' types. All score variables can now be changed
Score high_score = 968;
Score p1_score = 763;

// 'using' can be used in place of 'typedef' and is usually what we do in modern times for clarity - it is more versatile
using Level = unsigned long;

Level max_level = 99;
Level p1_level = 18;

