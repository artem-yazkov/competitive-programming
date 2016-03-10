#include <stdio.h>
#include <string.h>

int main()
{
    const char *first[]  = {"Alice",   "Ariel", "Aurora",
                            "Phil",    "Peter", "Olaf",
                            "Phoebus", "Ralph", "Robin",
                            NULL};
    const char *second[] = {"Bambi",   "Belle", "Bolt",
                            "Mulan",   "Mowgli","Mickey",
                            "Silver",  "Simba", "Stitch",
                            NULL};
    const char *third[]  = {"Dumbo",   "Genie", "Jiminy",
                            "Kuzko",   "Kida",  "Kenai",
                            "Tarzan",  "Tiana", "Winnie",
                            NULL};
    const char **destination[] = {first, second, third, NULL};

    int names;
    int position = 0;
    int steps    = 0;

    scanf("%d", &names);
    for (int iname = 0; iname < names; iname++) {
        static char name[16];
        scanf("%15s", &name);

        int idest;
        for (idest = 0; destination[idest]; idest++) {
            int mbox;
            for (mbox = 0; destination[idest][mbox]; mbox++) {
                if (strcmp(destination[idest][mbox], name) == 0) {
                    break;
                }
            }
            if (destination[idest][mbox]) {
                break;
            }
        }

        if (destination[idest]) {
            steps   += ((position - idest >= 0) ? (position - idest) : (idest - position));
            position = idest;
        }
    }

    printf("%d\n", steps);

    return 0;
}
