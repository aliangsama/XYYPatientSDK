//
//  BaseViewController.h
//  xinyaomeng
//
//  Created by 黄黎雯 on 2017/6/8.
//  Copyright © 2017年 hlw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewController : UIViewController
- (void)registerHideKeyWindow;
- (void) setupBack;
- (void) setupBack:(NSString *)name;
- (void) setupNextWithImage:(UIImage*) image;
- (void) setupNextWithArray:(NSArray*) array;
- (void) setupNextWithString:(NSString*) text;
- (void) setupNextWithString:(NSString *)text withColor:(UIColor *)color;
- (void) setupTitleWithString:(NSString*) text withColor:(UIColor*) color;
-(void)setupTitleWithString:(NSString *)text;

// 回调  子类继承各自处理
- (void)onBack;
- (void)onNext;
- (void)popByDrag;
- (BOOL)needDragBack;
- (BOOL)needRegisterHideKeyboard;
- (void)hideKeyWindow;

@end
