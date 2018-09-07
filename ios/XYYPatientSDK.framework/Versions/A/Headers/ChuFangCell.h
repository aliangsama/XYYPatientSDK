//
//  ChuFangCell.h
//  yaolianti-c
//
//  Created by zl on 2018/6/15.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYYPatientSDK.h"
@class RecordHomeModel;
typedef void (^onYDSelectBlock)(RecordHomeModel *model);
typedef void (^onShowDrugBlock)(NSString *code);
@interface ChuFangCell : UITableViewCell
-(void)reloadDataWithModel:(RecordHomeModel*)model;
-(void)setOnYDSelectBlock:(onYDSelectBlock)block;
-(void)setOnShowDrugBlock:(onShowDrugBlock)block;
@end
