//
//  DoctorStruce.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/22.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import "DBBase.h"

@interface DoctorKemuStruce : Jastor
@property(nonatomic,assign)NSInteger keyId;
@property(nonatomic,nonnull,copy)NSString *departMentName;
@property(nonatomic,nonnull,copy)NSString *departMentCode;
@property(nonatomic,assign)NSInteger state;
@property(nonatomic,assign)BOOL isSelect;
+ (NSArray *_Nullable)arrayFromData:(NSArray *_Nonnull)data;
@end

@interface DoctorStruce : Jastor
@property(nonatomic,assign)NSInteger keyId;
@property(nonatomic,assign)NSInteger docterId;
@property(nonatomic,nonnull,copy)NSString *hxAccount;
@property(nonatomic,nonnull,copy)NSString *phoneNum;
@property(nonatomic,nonnull,copy)NSString *name;
@property(nonatomic,assign)NSInteger hospitalId;
@property(nonatomic,nonnull,copy)NSString *hosName;
@property(nonatomic,assign)NSInteger age;
@property(nonatomic,nonnull,copy)NSString *state;
@property(nonatomic,nonnull,copy)NSString *headPicUrl;
@property(nonatomic,nonnull,copy)NSString *docterCertificatePicUrl;//认证图片
@property(nonatomic,nonnull,copy)NSString *departMentName;//科室
@property(nonatomic,nonnull,copy)NSString *expert;//专业
@property(nonatomic,assign)NSInteger diagnosedNum;
@property(nonatomic,nonnull,copy)NSString *position;//医生级别
@property(nonatomic,assign)NSInteger lineStatus;//lineStatus == 0  && videoFlag == 0     在线
@property(nonatomic,assign)NSInteger videoFlag;//lineStatus == 0  && videoFlag == 1     接诊中   其他的均为离线
+ (NSArray *_Nullable)arrayFromData:(NSArray *_Nonnull)data;
@end

//本地医生数据库
@interface DoctorDBStruce : DBBase
@property(nonatomic,nonnull,copy)NSString *doctorId;
@property(nonatomic,assign)NSInteger messtime;//接受消息时间戳
+ (DoctorDBStruce *__nonnull)contactWithDocId:(NSString *__nonnull)docId;
- (BOOL)saveToDB;
@end
