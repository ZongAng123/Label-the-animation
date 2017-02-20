//
//  DBPoint.h
//  标签动画
//
//  Created by 纵昂 on 2017/2/20.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#ifndef DBPoint_h
#define DBPoint_h

struct DBPoint {
    CGFloat x;
    CGFloat y;
    CGFloat z;
};

typedef struct DBPoint DBPoint;


DBPoint DBPointMake(CGFloat x, CGFloat y, CGFloat z) {
    DBPoint point;
    point.x = x;
    point.y = y;
    point.z = z;
    return point;
}


#endif /* DBPoint_h */
