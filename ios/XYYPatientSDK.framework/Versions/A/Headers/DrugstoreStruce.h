//
//  DrugstoreStruce.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/27.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import "Jastor.h"

@interface DrugstoreStruce : Jastor
@property(nonatomic,assign)NSInteger keyId;
@property(nonatomic,assign)NSInteger storeId;
@property(nonatomic,nonnull,copy)NSString *name;
@property(nonatomic,nonnull,copy)NSString *code;
@property(nonatomic,nonnull,copy)NSString *province;
@property(nonatomic,nonnull,copy)NSString *city;
@property(nonatomic,nonnull,copy)NSString *district;
@property(nonatomic,nonnull,copy)NSString *address;
@property(nonatomic,nonnull,copy)NSString *contactPhone;
@property(nonatomic,nonnull,copy)NSString *contactPersonName;
@property(nonatomic,assign)CGFloat longitude;
@property(nonatomic,assign)CGFloat latitude;
@property(nonatomic,assign)CGFloat juli;
+ (NSArray *_Nullable)arrayFromData:(NSArray *_Nonnull)data mylongitude:(double)mylongitude mylatitude:(double)mylatitude;
@end
//申请取药列表
@interface DrugstoreSQQYJiluStruce : Jastor
@property(nonatomic,assign)NSInteger keyId;
@property(nonatomic,nonnull,copy)NSString *orderCode;
@property(nonatomic,nonnull,copy)NSString *prescriptionCode;
@property(nonatomic,assign)NSInteger storeId;
@property(nonatomic,nonnull,copy)NSString *storeName;
@property(nonatomic,nonnull,copy)NSString *patientTel;
@property(nonatomic,nonnull,copy)NSString *patientName;
@property(nonatomic,nonnull,copy)NSString *patientAddress;
@property(nonatomic,assign)NSInteger orderStatus;//申请状态 -2，拒绝；-1，取消；1，未接单；2，已接单；3，配送中；0，已完成。
@property(nonatomic,assign)NSInteger demandType;//申请类型，0-自取，1-配送
@property(nonatomic,assign)NSInteger createTime;
+ (NSArray *_Nullable)arrayFromData:(NSArray *_Nonnull)data;
@end
