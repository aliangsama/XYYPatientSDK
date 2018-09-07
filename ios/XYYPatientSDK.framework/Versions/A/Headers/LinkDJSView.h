//
//  LinkDJSView.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/23.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LinkDJSView;
@protocol LinkDJSViewDelagete <NSObject>

- (void)customCountDown;
-(void)dismissDJS;
@end
@interface LinkDJSView : UIView

@property (nonatomic, assign) id<LinkDJSViewDelagete> delegate;
@property (nonatomic, assign) NSInteger downNumber;
@property(nonatomic,nonnull,copy)NSString *hxAccount;//医生云信id
@property(nonatomic,nonnull,copy)NSString *doctorName;//医生名称
@property(nonatomic,assign)NSInteger doctorId;//医生id

+ (instancetype) shareInstance;
-(void)show;
-(void)jdcgDismissView;
-(void)JJJDDismissView;
@end
