//
//  DBSphereView.h
//  标签动画
//
//  Created by 纵昂 on 2017/2/20.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DBSphereView : UIView
/**
 *  Sets the cloud's tag views.
 *
 *	@remarks Any @c UIView subview can be passed in the array.
 *
 *  @param array The array of tag views.
 */
- (void)setCloudTags:(NSArray *)array;

/**
 *  Starts the cloud autorotation animation.
 */
- (void)timerStart;

/**
 *  Stops the cloud autorotation animation.
 */
- (void)timerStop;

@end
