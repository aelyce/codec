#include <stdio.h>

int main (void)
  {
    FILE *outfile;
    outfile = fopen("maaheroes.cfg", "w");

    fprintf(outfile, "51\n");

    fprintf(outfile, "Iron Man\n");
    fprintf(outfile, "3\n");
    fprintf(outfile, "Black Widow\n");
    fprintf(outfile, "17\n");
    fprintf(outfile, "Hawkeye\n");
    fprintf(outfile, "19\n");
    fprintf(outfile, "Black Cat\n");
    fprintf(outfile, "24\n");
    fprintf(outfile, "Captain America\n");
    fprintf(outfile, "5\n");
    fprintf(outfile, "Colossus\n");
    fprintf(outfile, "12\n");
    fprintf(outfile, "Cyclops\n");
    fprintf(outfile, "3\n");
    fprintf(outfile, "Daredevil\n");
    fprintf(outfile, "8\n");
    fprintf(outfile, "Doctor Strange\n");
    fprintf(outfile, "3\n");
    fprintf(outfile, "Hulk\n");
    fprintf(outfile, "12\n");
    fprintf(outfile, "Human Torch\n");
    fprintf(outfile, "6\n");
    fprintf(outfile, "Invisible Woman\n");
    fprintf(outfile, "18\n");
    fprintf(outfile, "Iron Fist\n");
    fprintf(outfile, "8\n");
    fprintf(outfile, "Kitty Pryde\n");
    fprintf(outfile, "24\n");
    fprintf(outfile, "Luke Cage\n");
    fprintf(outfile, "8\n");
    fprintf(outfile, "Mr. Fantastic\n");
    fprintf(outfile, "17\n");
    fprintf(outfile, "Ms. Marvel\n");
    fprintf(outfile, "6\n");
    fprintf(outfile, "Nightcrawler\n");
    fprintf(outfile, "16\n");
    fprintf(outfile, "Phoenix\n");
    fprintf(outfile, "19\n");
    fprintf(outfile, "She-Hulk\n");
    fprintf(outfile, "4\n");
    fprintf(outfile, "Sif\n");
    fprintf(outfile, "12\n");
    fprintf(outfile, "Spider-Man\n");
    fprintf(outfile, "28\n");
    fprintf(outfile, "Spider-Woman\n");
    fprintf(outfile, "8\n");
    fprintf(outfile, "Storm\n");
    fprintf(outfile, "3\n");
    fprintf(outfile, "Thing\n");
    fprintf(outfile, "12\n");
    fprintf(outfile, "Thor\n");
    fprintf(outfile, "6\n");
    fprintf(outfile, "War Machine\n");
    fprintf(outfile, "1\n");
    fprintf(outfile, "Wolverine\n");
    fprintf(outfile, "24\n");
    fprintf(outfile, "Mockingbird\n");
    fprintf(outfile, "32\n");
    fprintf(outfile, "Black Panther\n");
    fprintf(outfile, "1\n");
    fprintf(outfile, "Scarlet Witch\n");
    fprintf(outfile, "2\n");
    fprintf(outfile, "Emma Frost\n");
    fprintf(outfile, "17\n");
    fprintf(outfile, "Rogue\n");
    fprintf(outfile, "32\n");
    fprintf(outfile, "Gambit\n");
    fprintf(outfile, "16\n");
    fprintf(outfile, "Magik\n");
    fprintf(outfile, "8\n");
    fprintf(outfile, "Quicksilver\n");
    fprintf(outfile, "40\n");
    fprintf(outfile, "Deadpool\n");
    fprintf(outfile, "8\n");
    fprintf(outfile, "Hercules\n");
    fprintf(outfile, "4\n");
    fprintf(outfile, "Ghost Rider\n");
    fprintf(outfile, "8\n");
    fprintf(outfile, "Beast\n");
    fprintf(outfile, "32\n");
    fprintf(outfile, "Cable\n");
    fprintf(outfile, "2\n");
    fprintf(outfile, "Valkyrie\n");
    fprintf(outfile, "4\n");
    fprintf(outfile, "Tigra\n");
    fprintf(outfile, "16\n");
    fprintf(outfile, "Psylocke\n");
    fprintf(outfile, "16\n");
    fprintf(outfile, "Punisher\n");
    fprintf(outfile, "32\n");
    fprintf(outfile, "Havok\n");
    fprintf(outfile, "2\n");
    fprintf(outfile, "Magneto\n");
    fprintf(outfile, "1\n");
    fprintf(outfile, "X-23\n");
    fprintf(outfile, "4\n");
    fprintf(outfile, "Wasp\n");
    fprintf(outfile, "16\n");
    fprintf(outfile, "Captain Britain\n");
    fprintf(outfile, "4\n");
    fprintf(outfile, "Hank Pym\n");
    fprintf(outfile, "1\n");

    fclose(outfile);
  }
