//
//  LNToast
//
//  Created by Liuonion.
//  Copyright © 2016年 Liuonion. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, LNToastPosition) {
    LNToastPositionTop,
    LNToastPositionCenter,
    LNToastPositionBottom,
};

@interface UIView (LNToast)

// each makeToast method creates a view and displays it as toast
- (void)makeToast:(NSString *)message;
- (void)makeToast:(NSString *)message duration:(NSTimeInterval)interval position:(LNToastPosition)position;
- (void)makeToast:(NSString *)message duration:(NSTimeInterval)interval position:(LNToastPosition)position image:(UIImage *)image;
- (void)makeToast:(NSString *)message duration:(NSTimeInterval)interval position:(LNToastPosition)position title:(NSString *)title;
- (void)makeToast:(NSString *)message duration:(NSTimeInterval)interval position:(LNToastPosition)position title:(NSString *)title image:(UIImage *)image;

// displays toast with an activity spinner
- (void)makeToastActivity;
- (void)makeToastActivity:(id)position;
- (void)hideToastActivity;

@end
