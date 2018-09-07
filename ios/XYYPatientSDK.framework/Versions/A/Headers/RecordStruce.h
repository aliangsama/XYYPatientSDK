//
//  RecordStruce.h
//  yaolianti-c
//
//  Created by zl on 2018/6/20.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import "Jastor.h"

@interface RecordDrugModel:Jastor
@property(nonatomic,nonnull,copy)NSString *commonName;
@property(nonatomic,nonnull,copy)NSString *packingRule;
+ (NSArray *_Nullable)arrayFromData:(NSArray *_Nonnull)data;
@end

@interface RecordHomeModel : Jastor
@property(nonatomic,assign)NSInteger storeId;//绑定药店id, 没有值是未绑定
@property(nonatomic,nonnull,copy)NSString *prescriptionId;
@property(nonatomic,nonnull,copy)NSString *code;
@property(nonatomic,nonnull,copy)NSString *createTime;
@property(nonatomic,nonnull,copy)NSString *goodsNumber;
@property(nonatomic,nonnull,copy)NSString *diagnosisFee;//诊疗费
@property(nonatomic,nonnull,copy)NSString *drugFee;//药品费用
@property(nonatomic,nonnull,copy)NSString *doctorName;
@property(nonatomic,nonnull,copy)NSString *storeName;
@property(nonatomic,assign)NSInteger isTakeDrug;//0 未取药，1 已取药
@property(nonatomic,nonnull,copy)NSArray *drugArray;//药品列表
@property(nonatomic,nonnull,copy)NSString *verificationCode;//取药码
@property(nonatomic,assign)int sourceType;//处方单类型:0 平台   1共享
+ (NSArray *_Nullable)arrayFromData:(NSArray *_Nonnull)data;

@end

@interface RecordDetailModel : Jastor
@property(nonatomic,nonnull,copy)NSString *storeName;//药店名称
@property(nonatomic,nonnull,copy)NSString *commonName;//药品名称
@property(nonatomic,nonnull,copy)NSString *packingRule;//包装规格
@property(nonatomic,nonnull,copy)NSString *unitName;//包装单位
@property(nonatomic,nonnull,copy)NSString *number;//药品数量
@property(nonatomic,nonnull,copy)NSString *useFunction;//用法
@property(nonatomic,nonnull,copy)NSString *singleDosage;//单次剂量
@property(nonatomic,nonnull,copy)NSString *directions;//用药频率
@property(nonatomic,nonnull,copy)NSString *directionsTime;//用药时长
@property(nonatomic,nonnull,copy)NSString *factoryName;//药品厂家名称
@property(nonatomic,nonnull,copy)NSString *salePrice;//药品单价
@property(nonatomic,nonnull,copy)NSString *subtotalPrice;//小计
+ (NSArray *_Nullable)arrayFromData:(NSArray *_Nonnull)data;

@end
