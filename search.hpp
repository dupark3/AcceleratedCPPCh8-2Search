

template <class FwdIt1, class FwdIt2>
FwdIt1 search(FwdIt1 first1, FwdIt1 last1, FwdIt2 first2, FwdIt2 last2){
    for ( ; ; ++first1){
        FwdIt1 it1 = first1;
        for(FwdIt2 it2 = first2; ; ++it1, ++it2){
            if(it2 == last2) return first1;
            if(it1 == last1) return last1;
            if(!(*it1 == *it2)) break;
        }
    }
}

