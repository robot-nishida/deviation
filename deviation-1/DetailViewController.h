//
//  DetailViewController.h
//  deviation-1
//
//  Created by Nishida,Ryosuke on 2014/05/25.
//  Copyright (c) 2014年 Nishida,Ryosuke. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
