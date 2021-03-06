/*
 
 Copyright 2017 Rodney Degracia
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy,
 modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software
 is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 
 */


#import <UIKit/UIKit.h>

#import "StationViewController.h"


@interface StationEditViewController : StationViewController

@property (nonatomic, strong) IBOutlet UITextField* armSettingTextField;
@property (nonatomic, strong) IBOutlet UITextField* backSettingTextField;
@property (nonatomic, strong) IBOutlet UITextField* chestSettingTextField;

@property (nonatomic, strong) IBOutlet UITextField* firstSetRepsTextField;
@property (nonatomic, strong) IBOutlet UITextField* firstSetWeightTextField;
@property (nonatomic, strong) IBOutlet UISwitch* isAdvancedSwitch;
@property (nonatomic, strong) IBOutlet UISwitch* isMetricSwitch;
@property (nonatomic, strong) IBOutlet UITextField* nameTextField;
@property (nonatomic, strong) IBOutlet UITextField* repCountTextField;
@property (nonatomic, strong) IBOutlet UITextField* seatSettingTextField;
@property (nonatomic, strong) IBOutlet UITextField* secondSetRepsTextField;
@property (nonatomic, strong) IBOutlet UITextField* secondSetWeightTextField;
@property (nonatomic, strong) IBOutlet UITextField* thirdSetRepsTextField;
@property (nonatomic, strong) IBOutlet UITextField* thirdSetWeightTextField;

@property (nonatomic, strong) IBOutlet UITextField* xsetCountTextField;
@property (nonatomic, strong) IBOutlet UITextField* weightTextField;

@property (strong, nonatomic) IBOutlet UIView *settingsView;
@property (strong, nonatomic) IBOutlet UIView *advancedView;
@property (strong, nonatomic) IBOutlet UIView *standardView;

@property (strong, nonatomic) IBOutlet UIScrollView* scrollView;
@property (strong, nonatomic) IBOutlet UIView* contentView;


@property (nonatomic, strong) IBOutlet UIBarButtonItem* rightBarButtonItem;
@property (nonatomic, strong) IBOutlet UIBarButtonItem* leftBarButtonItem;

@end
          
