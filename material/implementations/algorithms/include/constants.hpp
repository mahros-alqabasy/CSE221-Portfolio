#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

namespace Responses{

    struct SearchResponse{
        int target;
        bool founded = false;

        void print(){
            printf("SearchResponse(state=%s, index=%i)", founded ? "FOUNDED" : "NOTFOUND", target);
        }
    };
    
} // namespace Responses


namespace Constants{
    enum SortType{
        ASC, DESC
    };  
};
#endif