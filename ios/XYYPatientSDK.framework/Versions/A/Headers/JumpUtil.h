//
//  JumpUtil.h
//  aide
//
//  Created by huangliwen on 2017/12/11.
//  Copyright © 2017年 xym. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface JumpUtil : NSObject
// 从xib中加载ui对象
+ (id) loadFromXib:(NSString*) xib withCls:(Class) cls;
#pragma mark 主界面跳转
// 跳转到主页
+ (void) jumpMain:(UIViewController *)controller;

#pragma mark 申请开单
//医生详情
+(void)pushDoctorDetail:(UIViewController *)controller doctor:(id)doctor;

#pragma mark 药店相关
//药店列表
+(void)pushDrugstoreHome:(UIViewController *)controller prescriptionId:(NSString *)prescriptionId code:(NSString *)code isShow:(BOOL)isShow sourceType:(int)prescriptionType;
//药店地图
+(void)pushDrugstoreMap:(UIViewController *)controller store:(id)store;
@end
