//
//  XYYPatientSDKHeader.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/9/4.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XYYPatientSDK.h"
typedef void (^XYYSuccessBlock)(void);
typedef void (^XYYFailedBlock)(NSString* error);
@interface XYYPatientSDKHeader : NSObject
/**
 *  获取SDK实例
 *
 *  @return XYYPatientSDKHeader实例
 */
+ (instancetype)shareInstance;

/**
 *  初始化sdk
 *
 * @cerName 证书名称
 */
-(void)setupXYYPatientSDK:(NSString *)cerName;
//登录sdk
-(void)loginXYYPatientSDK:(NSString *)account success:(XYYSuccessBlock)success failed:(XYYFailedBlock)failed;
//跳转到问诊//看看打包有没有包含新内容
-(void)pushToInquiry:(UIViewController *)controller;
//看看打包有没有包含新内容
-(void)test;
@end
