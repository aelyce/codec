#include <stdio.h>

int main (void)
  {
    FILE *outfile;
    outfile = fopen("maaitems.cfg", "w");

    fprintf(outfile, "42\n");

    fprintf(outfile, "A.I.M. EMP Grenade Prototype Blueprints\n338\n676\n");
    fprintf(outfile, "A.I.M. Perpetual Motion Machine\n676\n338\n");
    fprintf(outfile, "A.I.M. Radiation Mask\n507\n507\n");
    fprintf(outfile, "Arctic Helm\n556\n278\n");
    fprintf(outfile, "Black Mirror\n410\n820\n");
    fprintf(outfile, "Bottle of Bub\n604\n1208\n");
    fprintf(outfile, "Cloak of Levitation\n615\n615\n");
    fprintf(outfile, "Crown of Blindness\n678\n678\n");
    fprintf(outfile, "Depleted Iso-8\n612\n306\n");
    fprintf(outfile, "Doombot Processor\n732\n1470\n");
    fprintf(outfile, "Dust of Death\n996\n996\n");
    fprintf(outfile, "Fermionic Manipulator\n306\n612\n");
    fprintf(outfile, "Hellfire Club Mask\n459\n459\n");
    fprintf(outfile, "Heart Shaped Herb\n747\n1245\n");
    fprintf(outfile, "Hive Death Spore\n1208\n604\n");
    fprintf(outfile, "Hive Parasite\n906\n906\n");
    fprintf(outfile, "HYDRA Badge\n1245\n747\n");
    fprintf(outfile, "Iron Man Power Band Replica\n504\n252\n");
    fprintf(outfile, "Infinite Ice of Jotunheim\n278\n556\n");
    fprintf(outfile, "Mastermold Cypher\n306\n612\n");
    fprintf(outfile, "Mental Amplifier\n498\n996\n");
    fprintf(outfile, "Mesodermal Augmentation\n452\n996\n");
    fprintf(outfile, "Nefaria Casino Chip\n452\n902\n");
    fprintf(outfile, "Occular Scanner\n747\n747\n");
    fprintf(outfile, "Punisher T-Shirt\n808\n1616\n");
    fprintf(outfile, "Pym Particle Capsule\n1616\n808\n");
    fprintf(outfile, "Red Shinobi Shozoku\n558\n558\n");
    fprintf(outfile, "Ruby Quartz Fragment\n1470\n732\n");
    fprintf(outfile, "S.H.I.E.L.D. Comm Device\n417\n417\n");
    fprintf(outfile, "Scroll of Watoomb\n820\n410\n");
    fprintf(outfile, "Sentinel Head\n459\n459\n");
    fprintf(outfile, "Sentinel Hand\n612\n306\n");
    fprintf(outfile, "Shard of Dominion\n372\n744\n");
    fprintf(outfile, "Shivering Sphere\n417\n417\n");
    fprintf(outfile, "Silvermane Silver Lighter\n902\n452\n");
    fprintf(outfile, "Snakeroot Seal\n744\n372\n");
    fprintf(outfile, "Spider-Tracer\n378\n378\n");
    fprintf(outfile, "Sting Blaster Prototype\n556\n278\n");
    fprintf(outfile, "Terrigen Crystals\n1101\n1101\n");
    fprintf(outfile, "Uru Nugget\n1212\n1212\n");
    fprintf(outfile, "Vita-Mon Mk I\n278\n556\n");
    fprintf(outfile, "WWII Captain America Shield Replica\n252\n504\n");

    fclose(outfile);
  }
