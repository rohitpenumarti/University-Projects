function [fitresult, gof] = polarization(Degree, Power, Uncertainty)
%CREATEFIT(DEGREE,POWER)
%  Create a fit.
%
%  Data for 'untitled fit 2' fit:
%      X Input : Degree
%      Y Output: Power
%  Output:
%      fitresult : a fit object representing the fit.
%      gof : structure with goodness-of fit info.
%
%  See also FIT, CFIT, SFIT.

%  Auto-generated by MATLAB on 04-Nov-2019 07:29:01


%% Fit: 'untitled fit 2'.
[xData, yData, error] = prepareCurveData( Degree, Power, Uncertainty(1:24) );

% Set up fittype and options.
ft = fittype( 'fourier8' );
opts = fitoptions( 'Method', 'NonlinearLeastSquares' );
opts.Display = 'Off';
opts.StartPoint = [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0.0121414208834388];

% Fit model to data.
[fitresult, gof] = fit( xData, yData, ft, opts );

% Plot fit with data.
figure( 'Name', 'untitled fit 2' );
h = plot( fitresult, xData, yData );
hold on
errorbar(xData, yData, error, '.')
hold off
legend( h, 'Power vs. Degree', 'Best Fit', 'Location', 'NorthEast', 'Interpreter', 'none' );
title('Power vs Degree of Polarization')
text(0,0.35,sprintf('SSE = %g\nRsq = %g\nAdj = %g\nRMSE = %g',gof.sse,gof.rsquare,gof.adjrsquare,gof.rmse))
% Label axes
xlabel( 'Angle of Polarization (degrees)', 'Interpreter', 'none' );
ylabel( 'Power (mW)', 'Interpreter', 'none' );
grid on

