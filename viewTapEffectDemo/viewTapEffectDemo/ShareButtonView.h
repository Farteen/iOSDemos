//
//  ShareButtonView.h
//  viewTapEffectDemo
//
//  Created by Yong Li on 7/18/14.
//  Copyright (c) 2014 Yong Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShareButtonView : UIView

@property (nonatomic, strong, readonly) UIImage* shareIcon;
@property (nonatomic, copy, readonly) NSString* shareTitle;

- (id)initWithIcon:(UIImage*)icon andTitle:(NSString*)title;
- (void)animateToDoneWithHandler:(void(^)())doneBlock;
- (void)showAnimation;
- (void)selectAnimation;
- (void)resetAnimation;

@end
