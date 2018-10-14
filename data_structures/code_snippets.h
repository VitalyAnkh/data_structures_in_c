//
// Created by vitalyr on 18-10-12.
//

#ifndef DATA_STRUCTURES_CODE_SNIPPETS_H
#define DATA_STRUCTURES_CODE_SNIPPETS_H



#endif //DATA_STRUCTURES_CODE_SNIPPETS_H

#define MALLOC(p, s)\
if (!(p=malloc(s))){\
fprintf(stderr,"Insuffcient memory!");\
exit(EXIT_FAILURE);\
}
