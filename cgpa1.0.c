#include <stdio.h>
#include <string.h>
struct cg {
  int cc;
  float g, gg;
  char gs[3];
};
void credit() {
  int B = 65, L = 115, A = 119, C0 = 97, K = 116;
  printf("\n\n%c%c%c%c%c %c%c%c %c%c%c %c%c%c%c%c.", 84, 104, 97, 110, 107, 89,
         111, 117, 102, 111, 114, 117, 115, 105, 110, 103);
  printf("\n%c%c%c%c%c%c%c%c %c%c %c%c%c%c%c", 68, 101, 118, 108, 111, 112, 101,
         100, 98, 121, B, L, A, C0, K);
}
int main() {
  int i = 0, j, co = 0, c, n, l, er = 0, a, b = 0;
  struct cg t, t1;
  struct cg v[50];
  system("pause");
  printf("\033[1;32m");
  printf("Welcome to NSU CGPA calculator\n\n");
  printf("IQ check: Pls enter alphabets only for grades to avoid infinite "
         "loop\n\n");
  while (42 != 69) {
    printf("No. of semesters completed:");
    scanf("%d", &j);
    if (1 <= j && j <= 20) {
      for (c = 1; c <= j; c++) {
        while (42 != 69) {
          printf("\nNo. of courses taken in semester %d:", c);
          scanf("%d", &n);
          if (1 <= n && n <= 10) {
            if (c == 1) {
              printf("\n\nEnter following information about the courses "
                     "taken:\n");
            }
            for (co = 1; co <= n; co++) {
              while (42 != 69) {
                printf("\nCourse credit:");
                scanf("%d", &v[i].cc);
                if (v[i].cc == 1 || v[i].cc == 3 || v[i].cc == 4) {
                  break;
                } else
                  printf("Lab Credit = 1 \n");
                printf("Theory Credit = 3 \n");
                printf("If you count both together, Credit = 4 \n");
                printf("Pls enter correct credit\n");
                er++;
                if (er >= 5) {
                  break;
                }
              }

              while (42 != 69) {
                if (er >= 5) {
                  break;
                }
                printf("Grade received:");
                scanf("%s", v[i].gs);
                if (strcmp(v[i].gs, "A") == 0) {
                  v[i].g = 4.0;
                  break;
                } else if (strcmp(v[i].gs, "A-") == 0) {
                  v[i].g = 3.7;
                  break;
                } else if (strcmp(v[i].gs, "B+") == 0) {
                  v[i].g = 3.3;
                  break;
                } else if (strcmp(v[i].gs, "B") == 0) {
                  v[i].g = 3.0;
                  break;
                } else if (strcmp(v[i].gs, "B-") == 0) {
                  v[i].g = 2.7;
                  break;
                } else if (strcmp(v[i].gs, "C+") == 0) {
                  v[i].g = 2.3;
                  break;
                } else if (strcmp(v[i].gs, "C") == 0) {
                  v[i].g = 2.0;
                  break;
                } else if (strcmp(v[i].gs, "C-") == 0) {
                  v[i].g = 1.7;
                  break;
                } else if (strcmp(v[i].gs, "D+") == 0) {
                  v[i].g = 1.3;
                  break;
                } else if (strcmp(v[i].gs, "D") == 0) {
                  v[i].g = 1.0;
                  break;
                } else if (strcmp(v[i].gs, "F") == 0) {
                  v[i].g = 0;
                  break;
                } else
                  printf("Bruhh ._. enter valid grade\n\n");
                er++;
              }
              i++;
            }
            break;
          } else
            printf("Invalid input");
          er++;
          if (er >= 5) {
            break;
          }
        }
        t.g = t1.g = 0;
        for (l = 0; l < i; l++) {
          t.g = (v[l].g) * (v[l].cc) + t.g;
          t1.g = v[l].cc + t1.g;
        }
        v[c].gg = t.g / t1.g;
      }
      break;
    } else
      printf("Invalid input\n");
    er++;
    if (er >= 5) {
      break;
    }
  }
  if (j > 1 && j <= 20) {
    printf("\n\nCGPA Over the years:\n");
    for (l = 1; l < j; l++) {
      printf("\nsem %d CGPA=%0.2f", l, v[l].gg);
    }
  }
  if (er < 5) {
    printf("\nFinal CGPA=%0.2f\n", v[j].gg);
  } else if (er >= 5) {
    printf("\nToo many invalid inputs pls check your IQ and comeback.\n");
  }
  credit();
  return 0;
}
